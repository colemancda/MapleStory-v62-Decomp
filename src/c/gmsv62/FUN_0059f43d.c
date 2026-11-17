/* FUN_0059f43d - 0x0059f43d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059f43d(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0065c988();
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)FUN_00429328(unaff_EBP + -0x14);
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar1;
  *(undefined4 *)(unaff_EBP + -0x24) = DAT_0097bb30;
  *(undefined4 *)(unaff_EBP + -0x20) = DAT_0097bb34;
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0097bb38;
  *(undefined4 *)(unaff_EBP + -0x18) = DAT_0097bb3c;
  *(int **)(unaff_EBP + -0x10) = piVar1;
  iVar2 = (**(code **)(iVar2 + 100))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)FUN_00429328(unaff_EBP + -0x10);
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x40))(piVar1,0,0);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963d08);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x28),
             (IBinding *)0x0);
  FUN_0045f4fc();
  FUN_0045f4fc();
  FUN_005aa6e2();
  FUN_005a728b();
  FUN_005aa2de();
  if (*(int *)(extraout_ECX + 0x30) != 0) {
    FUN_0045e7f1(0);
    *(undefined4 *)(extraout_ECX + 0x30) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


