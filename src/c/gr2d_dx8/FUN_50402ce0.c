/* FUN_50402ce0 - 0x50402ce0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __fastcall FUN_50402ce0(int param_1)

{
  int *piVar1;
  HMODULE hModule;
  int iVar2;
  FARPROC *ppFVar3;
  wchar_t *pwVar4;
  FARPROC local_14 [3];
  uint local_8;
  
  hModule = LoadLibraryA(s_D3D8_DLL_504352f4);
  if (hModule == (HMODULE)0x0) {
    pwVar4 = u_Gr2D_DX8__Direct8_1_not_found_504352b8;
  }
  else {
    local_8 = (uint)GetProcAddress(hModule,s_Direct3DCreate8_504352a8);
    if ((FARPROC)local_8 == (FARPROC)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(code *)local_8)(0xdc);
    }
    if (((FARPROC)local_8 != (FARPROC)0x0) && (iVar2 != 0)) {
      piVar1 = *(int **)(param_1 + 0x1c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(int *)(param_1 + 0x1c) = iVar2;
      piVar1 = *(int **)(param_1 + 0xc0);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)(param_1 + 0xc0) = 0;
      piVar1 = *(int **)(param_1 + 0xd0);
      local_14[0] = (FARPROC)(param_1 + 0xc0);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)(param_1 + 0xd0) = 0;
      piVar1 = *(int **)(param_1 + 0xd4);
      local_14[1] = (FARPROC)(param_1 + 0xd0);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)(param_1 + 0xd4) = 0;
      local_14[2] = (FARPROC)(param_1 + 0xd4);
      local_8 = 0;
      ppFVar3 = local_14;
      do {
        if (DAT_50438fac == 0) {
          FUN_50401c7b();
        }
        if (DAT_50438f98 == (code *)0x0) {
          return -0x7ffbfe10;
        }
        iVar2 = (*DAT_50438f98)(u_Shape2D_Vector2D_50435270,&DAT_50435298,*ppFVar3,0);
        if (iVar2 < 0) {
          return iVar2;
        }
        local_8 = local_8 + 1;
        ppFVar3 = ppFVar3 + 1;
      } while (local_8 < 3);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))
                        (*(int **)(param_1 + 0x1c),0,param_1 + 0x7c);
      return iVar2;
    }
    pwVar4 = u_Gr2D_DX8__Direct8_1_Initializati_5043521c;
  }
  FUN_504050cb(pwVar4,0);
  return -0x7fffbffb;
}


