/* FUN_00818d3e - 0x00818d3e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00818d3e(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_14;
  uint uStack_10;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(unaff_EBP + 0x10);
  if (((uVar1 & 0x80000000) == 0) && (*(int *)(unaff_EBP + 0xc) == 0x91)) {
    uStack_10 = 0x818d71;
    iVar2 = (*DAT_0097b704)();
    if ((*(int *)(extraout_ECX + 0x9c) == 0) ||
       ((999 < iVar2 - *(int *)(extraout_ECX + 0x9c) || (DAT_00978360 == 0)))) {
      *(undefined4 *)(extraout_ECX + 0xa0) = 1;
    }
    else {
      *(int *)(extraout_ECX + 0xa0) = *(int *)(extraout_ECX + 0xa0) + 1;
    }
    iStack_14 = *(int *)(extraout_ECX + 0xa0);
    *(int *)(extraout_ECX + 0x9c) = iVar2;
    if (iStack_14 < 4) {
      uStack_10 = *(undefined4 *)(DAT_00973cd8 + 4);
      iStack_14 = 0x818dc5;
      FUN_00640393();
    }
    else if ((iStack_14 == 4) && (DAT_00978360 != 0)) {
      *(int **)(unaff_EBP + 0x10) = &iStack_14;
      uStack_10 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00679d22(unaff_EBP + 0xc,0xb04);
      uVar6 = 0;
      uVar5 = 0xffffffff;
      uVar4 = 0xc;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uVar3 = FUN_00449713(0xc,0xffffffff,0);
      FUN_00449784(uVar3);
      FUN_00743a59(uVar3,uVar4,uVar5,uVar6);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uStack_10 = 0x818e26;
      FUN_00414ebb();
    }
    goto LAB_00818ec9;
  }
  if ((uVar1 & 0x80000000) == 0) {
    if (((uVar1 & 0x100) != 0) && (*(int *)(unaff_EBP + 0xc) == 0x7b)) {
      if (DAT_0097c1ac == 0) {
        uStack_10 = 0x80004003;
        iStack_14 = 0x818e52;
        FUN_00878dfb();
      }
      uStack_10 = 0x818e5d;
      FUN_00819605();
      goto LAB_00818ec9;
    }
    if (((uVar1 & 0x100) != 0) && (*(int *)(unaff_EBP + 0xc) == 0x73)) {
      uStack_10 = 0;
      iStack_14 = 0x818e74;
      (*DAT_0097b514)();
      goto LAB_00818ec9;
    }
    if (((uVar1 & 0x100) != 0) && (*(int *)(unaff_EBP + 0xc) == 0xd)) {
      uStack_10 = 0x818e8b;
      FUN_00818c4d();
      goto LAB_00818ec9;
    }
  }
  if (*(int *)(extraout_ECX + 0x80) == 0) {
    uStack_10 = -(uint)(extraout_ECX != 0) & extraout_ECX + 4U;
    iStack_14 = 0x818ea8;
    FUN_00817f6e();
  }
  if (*(int **)(extraout_ECX + 0x80) != (int *)0x0) {
    uStack_10 = 0x818eb7;
    iVar2 = (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x20))();
    if (iVar2 != 0) {
      iStack_14 = *(int *)(unaff_EBP + 0xc);
      uStack_10 = uVar1;
      (**(code **)**(undefined4 **)(extraout_ECX + 0x80))();
    }
  }
LAB_00818ec9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


