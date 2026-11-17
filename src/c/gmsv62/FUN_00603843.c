/* FUN_00603843 - 0x00603843 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00603843(void)

{
  undefined4 uVar1;
  int *extraout_ECX;
  int unaff_EBP;
  int iVar2;
  
  FUN_00879bb8();
  iVar2 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) < 10)) {
    iVar2 = unaff_EBP + 8;
    FUN_00609d92(0xffffffff);
    FUN_00609c0f(iVar2);
    extraout_ECX[1] = -1;
    if (*extraout_ECX == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*extraout_ECX + -4);
    }
    FUN_00609419(uVar1,extraout_ECX[2]);
    FUN_008161f1(0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_00609cba(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


