/* FUN_00402e32 - 0x00402e32 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


HRESULT FUN_00402e32(VARIANTARG *param_1,VARIANTARG *param_2)

{
  int iVar1;
  undefined4 uVar2;
  HRESULT HVar3;
  uint uVar4;
  
  if ((param_2->n1).n2.vt == 8) {
    if (param_1 != param_2) {
      iVar1 = FUN_00402bc3(param_1);
      if (iVar1 < 0) {
        return iVar1;
      }
      (param_1->n1).n2.vt = 8;
      iVar1 = *(int *)((int)&param_2->n1 + 8);
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar1 + -4) >> 1;
      }
      uVar2 = FUN_00402df5(iVar1,uVar4);
      *(undefined4 *)((int)&param_1->n1 + 8) = uVar2;
    }
    HVar3 = 0;
  }
  else {
    if ((param_1->n1).n2.vt == 8) {
      FUN_00402bc3(param_1);
    }
    HVar3 = VariantCopy(param_1,param_2);
  }
  return HVar3;
}


