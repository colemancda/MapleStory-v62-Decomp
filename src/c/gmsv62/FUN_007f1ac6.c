/* FUN_007f1ac6 - 0x007f1ac6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f1ac6(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *extraout_ECX;
  int unaff_EBP;
  float10 fVar4;
  
  FUN_00879bb8();
  extraout_ECX[0x46] = extraout_ECX[0x59];
  extraout_ECX[0x58] = 0;
  iVar2 = FUN_0048bb31(extraout_ECX + 0x47,extraout_ECX[0x49]);
  if (iVar2 == 0) {
    if (extraout_ECX[0x44] == 0) goto LAB_007f1ba2;
    FUN_007f3ee6();
    iVar2 = (*(code *)**(undefined4 **)extraout_ECX[5])();
    *(uint *)(unaff_EBP + -0x10) = (uint)(iVar2 == 0);
    if ((iVar2 == 0) != 0) {
      puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x8c5);
      uVar1 = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_007d4073(uVar1,100);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
    }
  }
  else {
    (**(code **)(*extraout_ECX + 0x10))(0,0,0);
  }
  iVar2 = *(int *)(DAT_00978138 + 8);
  fVar4 = (float10)FUN_005d0e60();
  iVar2 = FUN_004f1a11((double)(((float10)*(double *)(iVar2 + 0x70) * (float10)_DAT_008f21d8) /
                               fVar4));
  extraout_ECX[0x1e] = iVar2;
  iVar2 = FUN_004f1a11(0);
  extraout_ECX[0x18] = iVar2;
LAB_007f1ba2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


