/* FUN_50407bd9 - 0x50407bd9 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 __fastcall FUN_50407bd9(undefined4 *param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = GetProcAddress((HMODULE)*param_1,s_InitializeFlashbyDevice_50435538);
  param_1[1] = pFVar1;
  if (pFVar1 != (FARPROC)0x0) {
    pFVar1 = GetProcAddress((HMODULE)*param_1,s_LoadMediaFile_50435528);
    param_1[2] = pFVar1;
    if (pFVar1 != (FARPROC)0x0) {
      pFVar1 = GetProcAddress((HMODULE)*param_1,s_RenderFlash_5043551c);
      param_1[3] = pFVar1;
      if (pFVar1 != (FARPROC)0x0) {
        pFVar1 = GetProcAddress((HMODULE)*param_1,s_ReleaseFlash_5043550c);
        param_1[4] = pFVar1;
        if (pFVar1 != (FARPROC)0x0) {
          pFVar1 = GetProcAddress((HMODULE)*param_1,s_IsRenderFlash_504354fc);
          param_1[5] = pFVar1;
          if (pFVar1 != (FARPROC)0x0) {
            return 0;
          }
        }
      }
    }
  }
  FreeLibrary((HMODULE)*param_1);
  return 1;
}


