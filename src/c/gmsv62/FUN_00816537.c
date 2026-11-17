/* FUN_00816537 - 0x00816537 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00816537(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00448dc6(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puVar2 = &DAT_0097bb30;
  }
  else {
    FUN_004031b7(1,3);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(unaff_EBP + 0xc);
    puVar2 = (undefined4 *)
             FUN_00545a5c(unaff_EBP + -0x34,*piVar1,piVar1[1],piVar1[2] - *piVar1,
                          piVar1[3] - piVar1[1],unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -0x10) = 3;
    *(undefined4 *)(unaff_EBP + -4) = 3;
  }
  VariantInit(*(VARIANTARG **)(unaff_EBP + 8));
  iVar3 = FUN_00402e32(*(undefined4 *)(unaff_EBP + 8),puVar2);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


