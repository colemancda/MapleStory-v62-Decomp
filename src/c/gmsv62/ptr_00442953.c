/* ptr_00442953 - 0x00442953 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00442953(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00878dfb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  FUN_00403191();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xcac);
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xcac);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  piVar2 = (int *)*piVar1;
  iVar3 = *piVar2;
  *(int **)(unaff_EBP + 8) = piVar2;
  iVar3 = (**(code **)(iVar3 + 0x90))
                    (piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x80),
                     *(undefined4 *)(unaff_EBP + -0x7c),*(undefined4 *)(unaff_EBP + -0x78));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  if (*piVar1 == 0) {
    FUN_00878dfb();
  }
  piVar1 = (int *)*piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x80))(piVar1,0);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963de8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


