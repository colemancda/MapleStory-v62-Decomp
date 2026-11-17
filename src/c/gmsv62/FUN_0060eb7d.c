/* FUN_0060eb7d - 0x0060eb7d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060eb7d(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  uint *puVar4;
  
  FUN_00879bb8();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  uVar2 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(uint *)(extraout_ECX + 0x188) = uVar2 & 0xff;
  if ((uVar2 & 0xff) != 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    do {
      puVar4 = (uint *)(*(int *)(extraout_ECX + 0x18c) + *(int *)(unaff_EBP + 8));
      uVar2 = FUN_00424561();
      *puVar4 = uVar2 & 0xffff;
      uVar2 = FUN_00424561();
      puVar4[1] = uVar2 & 0xffff;
      uVar2 = FUN_0042459a();
      puVar4[2] = uVar2;
      uVar3 = FUN_004b57d7(unaff_EBP + -0x18,uVar1);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_004653ef(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_00449913(0);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x14;
    } while (*(int *)(unaff_EBP + -0x10) < *(int *)(extraout_ECX + 0x188));
  }
  FUN_0060f8d6();
  FUN_008161f1(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


