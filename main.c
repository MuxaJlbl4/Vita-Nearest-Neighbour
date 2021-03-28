#include <psp2/kernel/modulemgr.h>
#include <psp2/kernel/processmgr.h>
#include <psp2/gxm.h>
#include <taihen.h>

static SceUID hook;
static tai_hook_ref_t ref;

int sceGxmTextureSetMagFilter_patched(SceGxmTexture *texture, SceGxmTextureFilter magFilter)
{
	int ret = TAI_CONTINUE(int, ref, texture, SCE_GXM_TEXTURE_FILTER_POINT);
	return ret;
}

void _start() __attribute__ ((weak, alias ("module_start")));
int module_start(SceSize argc, const void *args)
{
	hook = taiHookFunctionImport(&ref, TAI_MAIN_MODULE, TAI_ANY_LIBRARY, 0xFA695FD7, sceGxmTextureSetMagFilter_patched);
	return SCE_KERNEL_START_SUCCESS;
}

int module_stop(SceSize argc, const void *args) 
{
	taiHookRelease(hook, ref);
	return SCE_KERNEL_STOP_SUCCESS;
}
