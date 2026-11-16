/* FUN_5041d7ff - 0x5041d7ff in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_5041d7ff(void)

{
  LSTATUS LVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined8 uVar4;
  int local_14;
  DWORD local_10 [2];
  HKEY local_8;
  
  LVar1 = RegOpenKeyA((HKEY)0x80000002,"Software\\Microsoft\\Direct3D",&local_8);
  uVar2 = extraout_ECX;
  uVar3 = extraout_EDX;
  if (LVar1 == 0) {
    local_10[1] = 4;
    LVar1 = RegQueryValueExA(local_8,"DisableMMX",(LPDWORD)0x0,local_10,(LPBYTE)&local_14,
                             local_10 + 1);
    if (((LVar1 == 0) && (local_10[0] == 4)) && (local_14 != 0)) {
      RegCloseKey(local_8);
      DAT_50435e38 = 0;
      return 0;
    }
    RegCloseKey(local_8);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  if (DAT_50435e38 < 0) {
    DAT_50435e38 = 0;
    uVar4 = FUN_5041d7da(uVar2,uVar3);
    if ((int)uVar4 != 0) {
      DAT_50435e38 = 1;
    }
  }
  return DAT_50435e38;
}


