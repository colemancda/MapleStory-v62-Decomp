/* FUN_00792f80 - 0x00792f80 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00792f80(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_20;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x524) == 0) {
    iStack_10 = unaff_EBP + 8;
    uStack_14 = 0x792fa8;
    FUN_00793038();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(int **)(unaff_EBP + 8) == (int *)0x0) || (iVar2 = **(int **)(unaff_EBP + 8), iVar2 == 0))
    {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(iVar2 + -4) >> 1;
    }
    if (uVar1 != 0) {
      iStack_10 = 3;
      uStack_14 = 0x7fffffff;
      uStack_18 = 1000;
      iStack_20 = extraout_ECX + 0xd3c;
      *(undefined1 **)(unaff_EBP + -0x10) = auStack_1c;
      FUN_0041160e();
      *(int **)(unaff_EBP + -0x14) = &iStack_20;
      FUN_00433bdf(extraout_ECX + 0xd2c);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_0043f900();
      uVar1 = (uint)(iVar2 == 0);
      uVar3 = FUN_004091f9(uVar1);
      FUN_00424e82(uVar3);
      FUN_0042d941(uVar3,uVar1);
    }
    if (*(int *)(unaff_EBP + 8) != 0) {
      iStack_10 = 0x793029;
      FUN_004030b1();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


