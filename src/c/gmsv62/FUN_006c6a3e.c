/* FUN_006c6a3e - 0x006c6a3e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c6a3e(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0081622a(*(undefined4 *)(unaff_EBP + 8));
  iVar2 = FUN_006c8013();
  if (iVar2 == 0) {
    FUN_004031b7(0xfffffffe,3);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(extraout_ECX + 0xb88) == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + 8,unaff_EBP + -0x20);
    piVar1 = *(int **)(unaff_EBP + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_004031b7(0xfffffffe,3);
    iVar2 = *(int *)(extraout_ECX + 0xb8c);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + -0x10,unaff_EBP + -0x30);
    piVar1 = *(int **)(unaff_EBP + -0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_006c73a1();
    FUN_006c6f71();
    FUN_006c6b48();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


