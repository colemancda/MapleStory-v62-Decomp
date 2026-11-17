/* FUN_0057b811 - 0x0057b811 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0057b811(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0081622a(*(undefined4 *)(unaff_EBP + 8));
  if (*(int *)(extraout_ECX + 0xd4) != 7) {
    FUN_004031b7(0xff,3);
    uVar1 = *(undefined4 *)(extraout_ECX + 0xdc);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + 8) = uVar1;
    piVar2 = (int *)FUN_00448dc6(unaff_EBP + -0x10);
    iVar3 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar2;
    iVar3 = (**(code **)(*piVar2 + 0x80))
                      (piVar2,0x77,0x15,*(undefined4 *)(unaff_EBP + 8),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar2,&DAT_00963cc8);
    }
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


