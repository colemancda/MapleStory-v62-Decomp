/* FUN_00811063 - 0x00811063 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00811063(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00810d66();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x171] = 0;
  *extraout_ECX = &PTR_FUN_008f2cac;
  extraout_ECX[1] = &PTR_FUN_008f2c60;
  extraout_ECX[2] = &PTR_FUN_008f2c5c;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar1 = *(int *)(DAT_00978368 + 0x202c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x20,0x1023);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  else {
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x1c,0x1024);
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 4;
  }
  uVar2 = *puVar4;
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x1031);
  uVar3 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  FUN_0041354c(unaff_EBP + -0x14,uVar3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_00402676();
  }
  FUN_004bc5f0(*(undefined4 *)(unaff_EBP + -0x14),1,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


