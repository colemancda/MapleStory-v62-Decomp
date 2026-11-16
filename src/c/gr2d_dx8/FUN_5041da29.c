/* FUN_5041da29 - 0x5041da29 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_5041da29(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  int local_8;
  
  if (param_1 == 0) {
    DAT_50435e3c = 0xffff;
    ppuVar3 = &PTR_FUN_504356e0;
    ppuVar4 = &PTR_LAB_504355f8;
    for (iVar2 = 0x39; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppuVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      ppuVar4 = ppuVar4 + 1;
    }
  }
  else if (DAT_50435e3c == 0xffff) {
    DAT_50435e3c = 0;
    ppuVar3 = &PTR_FUN_504356e0;
    ppuVar4 = &PTR_LAB_504355f8;
    for (iVar2 = 0x39; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppuVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      ppuVar4 = ppuVar4 + 1;
    }
    FUN_50420055(&PTR_LAB_504355f8);
    iVar2 = FUN_5041d77e(4,"DisablePSGP",(LPBYTE)&param_1);
    if (iVar2 == 0) {
      param_1 = 0;
    }
    iVar2 = FUN_5041d77e(4,"DisableD3DXPSGP",(LPBYTE)&local_8);
    if (iVar2 != 0) {
      param_1 = local_8;
    }
    if (param_1 != 1) {
      uVar1 = FUN_5041d975(7);
      if (uVar1 == 0) {
        uVar1 = FUN_5041d975(10);
        if (uVar1 == 0) {
          uVar1 = FUN_5041d975(6);
          if (uVar1 != 0) {
            FUN_5041f6e0(&PTR_LAB_504355f8);
            DAT_50435e3c = 3;
          }
        }
        else {
          FUN_5041f7f0(&PTR_LAB_504355f8);
          DAT_50435e3c = 2;
        }
      }
      else {
        FUN_5041f9d3(&PTR_LAB_504355f8);
        DAT_50435e3c = 1;
      }
    }
  }
  return DAT_50435e3c;
}


