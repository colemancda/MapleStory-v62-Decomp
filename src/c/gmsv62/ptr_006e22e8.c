/* ptr_006e22e8 - 0x006e22e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006e22e8(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  FUN_00878e09(in_EAX,unaff_EBX);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < unaff_EDI) {
    FUN_00878dfb();
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  if (DAT_00978364 != unaff_EDI) {
    FUN_008180db();
  }
  *(int *)(unaff_EBP + -0x34) = unaff_EDI;
  *(undefined4 *)(unaff_EBP + -0x40) = 1;
  *(int *)(unaff_EBP + -0x3c) = unaff_EDI;
  *(int *)(unaff_EBP + -0x38) = unaff_EDI;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_004184ca(u_UI_UIWindow_img_MonsterBook_Cont_0096aeb0);
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar3 = FUN_00450382();
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))(uVar1,2000,9,5,1);
  FUN_004184ca(u_UI_UIWindow_img_MonsterBook_Cont_0096ae4c,0xffffffff);
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar3 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))(uVar1,0x7d1,9,0x14,1,unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


