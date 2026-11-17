/* FUN_0080dd99 - 0x0080dd99 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0080dd99(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_004bc8b4();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x28] = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x29] = 0;
  FUN_0087b2f0(extraout_ECX + 0x2a,4,10,FUN_00483ba7,FUN_00414ebb);
  extraout_ECX[0x34] = 0;
  extraout_ECX[0x35] = 0;
  extraout_ECX[0x36] = 0;
  extraout_ECX[0x37] = 0;
  *extraout_ECX = &PTR_FUN_008f2ae8;
  extraout_ECX[1] = &PTR_LAB_008f2a9c;
  extraout_ECX[2] = &PTR_FUN_008f2a98;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar1 = *(int *)(DAT_00978368 + 0x202c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x24,0x1023);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
  }
  else {
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x20,0x1024);
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 0xd;
  }
  *(undefined4 *)(unaff_EBP + -0x18) = *puVar3;
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x1c,0x1022);
  uVar2 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0xe;
  FUN_0041354c(unaff_EBP + -0x14,uVar2,*(undefined4 *)(unaff_EBP + -0x18));
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_00402676();
  }
  FUN_004bc5f0(*(undefined4 *)(unaff_EBP + -0x14),1,0);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


