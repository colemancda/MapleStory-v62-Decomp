/* FUN_0072c173 - 0x0072c173 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0072c173(void)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar5;
  
  FUN_00879bb8();
  FUN_0081622a(*(undefined4 *)(unaff_EBP + 8));
  FUN_00448dc6(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7(0xff,3);
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x2e8);
  piVar4 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar4 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + -0x10) = piVar4;
  iVar2 = (**(code **)(iVar2 + 0x80))
                    (piVar4,0x16,0x12,*(undefined4 *)(unaff_EBP + -0x14),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  puVar5 = &DAT_0096b500;
  *(undefined4 **)(unaff_EBP + -0x10) = &DAT_0096b500;
  while( true ) {
    FUN_004031b7(0xff,3);
    pbVar3 = (byte *)(*(int *)(extraout_ECX + 0xa4) + *(int *)(unaff_EBP + -0x14));
    *(undefined4 *)(unaff_EBP + -0x18) =
         *(undefined4 *)(extraout_ECX + 0xa8 + ((uint)pbVar3[1] + (uint)*pbVar3 * 4) * 4);
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    uVar1 = puVar5[1];
    *(undefined4 *)(unaff_EBP + -0x1c) = *puVar5;
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + -0x20) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar4,*(undefined4 *)(unaff_EBP + -0x1c),uVar1,
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 8;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 2;
    if (0x96b61f < *(int *)(unaff_EBP + -0x10)) break;
    puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
  }
  piVar4 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


