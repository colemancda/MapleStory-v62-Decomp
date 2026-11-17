/* FUN_006102ee - 0x006102ee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006102ee(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  int *piStack_5c;
  
  FUN_00879bb8();
  piStack_5c = (int *)0x610308;
  FUN_0081622a();
  piStack_5c = (int *)0x610314;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  piStack_5c = (int *)(unaff_EBP + -0x24);
  iStack_60 = 0x610323;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    piStack_5c = (int *)0x61032f;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_5c = (int *)0x61033c;
  FUN_00403191();
  piStack_5c = (int *)0x0;
  iStack_60 = unaff_EBP + -0x24;
  iStack_64 = unaff_EBP + -0x44;
  *(undefined4 **)(unaff_EBP + -0x14) = &local_68;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  local_68 = extraout_ECX_00;
  FUN_00679e4e(&local_68,0xa0a);
  iVar1 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_60 = 0x610388;
  iVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 != 0) {
    piStack_5c = (int *)0x61039f;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_5c = (int *)0x6103b0;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_5c = (int *)0x6103bd;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_5c = (int *)0x6103c8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_5c = (int *)0x6103d5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_5c = (int *)0x6103e0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_5c = (int *)0x6103ed;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_5c = (int *)0x6103f8;
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(extraout_ECX + 0x90) + 0x48) != 0) {
    piStack_5c = (int *)0x61040e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    piStack_5c = (int *)(unaff_EBP + -0x34);
    iStack_60 = 0x610418;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      piStack_5c = (int *)0x610424;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_5c = (int *)0x610433;
    piVar2 = (int *)FUN_00448dc6();
    iVar1 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar1 == 0) {
      piStack_5c = (int *)0x610448;
      FUN_00878dfb();
    }
    piVar2 = (int *)*piVar2;
    local_68 = *(undefined4 *)(unaff_EBP + 8);
    iStack_64 = *(int *)(unaff_EBP + -0x34);
    iStack_60 = *(int *)(unaff_EBP + -0x30);
    piStack_5c = *(int **)(unaff_EBP + -0x2c);
    iVar1 = (**(code **)(*piVar2 + 0x80))(piVar2,6,0x33);
    if (iVar1 < 0) {
      iStack_64 = 0x610476;
      iStack_60 = iVar1;
      piStack_5c = piVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      piStack_5c = (int *)0x610487;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_5c = (int *)0x610494;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_5c = (int *)0x61049f;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    piStack_5c = (int *)0x6104b0;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


