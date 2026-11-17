/* FUN_006a2ec5 - 0x006a2ec5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a2ec5(void)

{
  undefined4 uVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar4;
  uint auStack_24 [4];
  
  FUN_00879bb8();
  auStack_24[3] = 0x6a2edb;
  FUN_008162ff();
  auStack_24[3] = 0x6a2ee3;
  DVar2 = timeGetTime();
  if ((int)(DVar2 - *(int *)(extraout_ECX + 0xac)) < 0) {
    auStack_24[3] = 0x6a2ef4;
    DVar2 = timeGetTime();
    uVar4 = (*(int *)(extraout_ECX + 0xac) - DVar2) / 1000;
  }
  else {
    uVar4 = 0;
  }
  if (*(uint *)(extraout_ECX + 0xb0) != uVar4) {
    *(uint *)(extraout_ECX + 0xb0) = uVar4;
    if (uVar4 < 0x79) {
      auStack_24[3] = 0;
      auStack_24[2] = 0x6a2f2c;
      FUN_008161f1();
      auStack_24[3] = 0x620;
      auStack_24[2] = unaff_EBP + -0x14;
      auStack_24[1] = 0x6a2f3f;
      puVar3 = (undefined4 *)FUN_00679d86();
      uVar1 = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
      auStack_24[3] = 0x6a2f64;
      auStack_24[3] = __ftol();
      auStack_24[2] = *(undefined4 *)(unaff_EBP + -0x10);
      auStack_24[1] = 0x6a2f6d;
      FUN_007d40d5();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      auStack_24[3] = 0x6a2f7b;
      FUN_00402676();
    }
    if (uVar4 == 0) {
      auStack_24[3] = 0;
      auStack_24[2] = 0x6a2f8f;
      (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x7c) + 4) + 0x24))();
      auStack_24[2] = 0;
      auStack_24[1] = 0x6a2f9b;
      (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x7c) + 4) + 0x1c))();
      auStack_24[1] = 0;
      auStack_24[0] = 0x6a2faa;
      (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x84) + 4) + 0x1c))();
      uVar4 = -(uint)(extraout_ECX != 0) & extraout_ECX + 4U;
      auStack_24[0] = uVar4;
      FUN_008180db();
      auStack_24[0] = uVar4;
      FUN_00817f6e();
      *(uint **)(unaff_EBP + -0x10) = auStack_24;
      auStack_24[0] = 0;
      FUN_00414edd(&DAT_00978474,0xffffffff);
      FUN_006a3023();
      if (DAT_0097bcf0 != 0) {
        auStack_24[0] = 0x6a2ff7;
        FUN_00815de9();
        if (DAT_0097bcf0 != 0) {
          auStack_24[0] = 1;
          (*(code *)**(undefined4 **)(DAT_0097bcf0 + 8))();
        }
      }
      *(undefined4 *)(DAT_00978368 + 0x3298) = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


