/* FUN_00827a0e - 0x00827a0e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00827a0e(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8);
  if (*(int *)(extraout_ECX + 0x1c) != 0) {
    *(undefined4 *)(extraout_ECX + 0x1c) = 0;
    *(int *)(extraout_ECX + 0x18) = iVar3;
    *(int *)(extraout_ECX + 0x44) = iVar3;
  }
  while (iVar3 != *(int *)(extraout_ECX + 0x18) && -1 < iVar3 - *(int *)(extraout_ECX + 0x18)) {
    *(undefined4 *)(unaff_EBP + -0x14) = DAT_009796d4;
    FUN_00475ac6();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(undefined4 **)(unaff_EBP + -0x14) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(unaff_EBP + -0x14))();
    }
    FUN_008193ed();
    *(int *)(extraout_ECX + 0x18) = *(int *)(extraout_ECX + 0x18) + 0x1e;
    if (iVar3 != *(int *)(extraout_ECX + 0x18) && -1 < iVar3 - *(int *)(extraout_ECX + 0x18)) {
      if (DAT_0097c1ac == (int *)0x0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = DAT_0097c1ac;
      iVar2 = (**(code **)(*DAT_0097c1ac + 0x18))(DAT_0097c1ac,*(undefined4 *)(extraout_ECX + 0x18))
      ;
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar1,&DAT_00964018);
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00475ae3();
  }
  if (DAT_0097c1ac == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = DAT_0097c1ac;
  iVar3 = (**(code **)(*DAT_0097c1ac + 0x18))(DAT_0097c1ac,iVar3);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00964018);
  }
  FUN_0040f179();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


