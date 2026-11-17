/* FUN_0079518d - 0x0079518d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0079518d(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_00560122();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2b] = 0;
  FUN_0087b2f0(extraout_ECX + 0x2c,0x18,2,FUN_0079536d,&LAB_0061397b);
  extraout_ECX[0x3a] = 0xffffffff;
  extraout_ECX[0x39] = 1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x3d] = 0;
  FUN_0079e1f8(0x18,unaff_EBP + -0xd);
  extraout_ECX[0x40] = 0;
  extraout_ECX[0x41] = 0;
  extraout_ECX[0x42] = 0;
  extraout_ECX[0x3e] = &PTR_FUN_008e8648;
  extraout_ECX[0x45] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar1 = FUN_004029b9(0x90);
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_005c5810();
  }
  extraout_ECX[0x67] = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  extraout_ECX[0x70] = 0;
  extraout_ECX[0x71] = 0;
  *extraout_ECX = &PTR_FUN_008ed128;
  extraout_ECX[1] = &PTR_LAB_008ed104;
  extraout_ECX[2] = &PTR_FUN_008ed100;
  uVar2 = FUN_0055a766();
  extraout_ECX[0x4b] = uVar2;
  uVar2 = FUN_0055a766();
  extraout_ECX[0x48] = uVar2;
  uVar2 = FUN_0055a766();
  extraout_ECX[0x4e] = uVar2;
  uVar2 = FUN_0055a766();
  extraout_ECX[0x51] = uVar2;
  uVar2 = FUN_0055a766();
  extraout_ECX[0x54] = uVar2;
  uVar2 = FUN_0055a766();
  extraout_ECX[0x57] = uVar2;
  uVar2 = FUN_0055a766();
  extraout_ECX[0x5a] = uVar2;
  uVar2 = FUN_0055a766();
  extraout_ECX[0x5d] = uVar2;
  uVar2 = FUN_0055a766();
  extraout_ECX[0x60] = uVar2;
  uVar2 = FUN_0055a766();
  extraout_ECX[99] = uVar2;
  extraout_ECX[100] = 0;
  uVar2 = FUN_007d1e08();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x65] = uVar2;
  return extraout_ECX;
}


