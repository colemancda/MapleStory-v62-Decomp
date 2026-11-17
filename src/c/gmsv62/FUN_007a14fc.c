/* FUN_007a14fc - 0x007a14fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007a14fc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_0078b0ed(*(undefined4 *)(unaff_EBP + 8));
  DAT_00978358 = -(uint)(extraout_ECX != (undefined4 *)0xffffe1a7) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x797] = 0;
  extraout_ECX[0x798] = 0;
  extraout_ECX[0x7af] = 0;
  extraout_ECX[0x7b0] = 0;
  extraout_ECX[0x7b1] = 0;
  extraout_ECX[0x7ad] = &PTR_FUN_008f19e4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x7b5] = 0;
  extraout_ECX[0x7b6] = 0;
  iVar1 = FUN_004029b9(0x90);
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_005c5810();
  }
  extraout_ECX[0x7b8] = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  extraout_ECX[0x7bf] = 0;
  extraout_ECX[0x7c0] = 0;
  extraout_ECX[0x7c1] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0074b9b2();
  extraout_ECX[0x8ff] = 0;
  extraout_ECX[0x900] = 0;
  extraout_ECX[0x901] = 0;
  extraout_ECX[0x8fd] = &PTR_FUN_008f19e0;
  extraout_ECX[0x915] = 0;
  extraout_ECX[0x916] = 0;
  extraout_ECX[0x91a] = 0;
  extraout_ECX[0x91b] = 0;
  extraout_ECX[0x91e] = 0;
  extraout_ECX[0x91f] = 0x1f;
  extraout_ECX[0x920] = 0;
  extraout_ECX[0x91d] = &PTR_FUN_008ecb0c;
  extraout_ECX[0x921] = 100;
  extraout_ECX[0x922] = 0x18;
  extraout_ECX[0x923] = 0;
  extraout_ECX[0x924] = 0;
  extraout_ECX[0x925] = 0;
  extraout_ECX[0x928] = 0;
  extraout_ECX[0x929] = 0;
  extraout_ECX[0x92a] = 0;
  extraout_ECX[0x926] = &PTR_FUN_008f19dc;
  extraout_ECX[0x92d] = 0;
  extraout_ECX[0x92e] = 0;
  extraout_ECX[0x92f] = 0;
  extraout_ECX[0x92b] = &PTR_FUN_008f19dc;
  extraout_ECX[0x930] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  extraout_ECX[0x931] = 0;
  FUN_007b4686(4,unaff_EBP + 0xb);
  extraout_ECX[0x932] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  extraout_ECX[0x933] = 0;
  FUN_007b4686(4,unaff_EBP + -0xd);
  extraout_ECX[0x934] = 0;
  *(undefined1 *)(extraout_ECX + 0x935) = 0;
  extraout_ECX[0x93a] = 0;
  extraout_ECX[0x93b] = 0x1f;
  extraout_ECX[0x93c] = 0;
  extraout_ECX[0x939] = &PTR_FUN_008ecb0c;
  extraout_ECX[0x93d] = 100;
  extraout_ECX[0x93e] = 0x18;
  extraout_ECX[0x940] = 0;
  extraout_ECX[0x941] = 0x1f;
  extraout_ECX[0x942] = 0;
  extraout_ECX[0x93f] = &PTR_FUN_008ecb0c;
  extraout_ECX[0x943] = 100;
  extraout_ECX[0x944] = 0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  extraout_ECX[0x945] = 0;
  extraout_ECX[0x946] = 0;
  extraout_ECX[0x947] = 0;
  extraout_ECX[0x948] = 0;
  *extraout_ECX = &PTR_FUN_008f1990;
  extraout_ECX[1] = &PTR_LAB_008f196c;
  extraout_ECX[2] = &PTR_FUN_008f1968;
  extraout_ECX[0x1e] = &PTR_LAB_008f1954;
  FUN_007ae721(1);
  uVar2 = FUN_004133b5();
  extraout_ECX[0x7bb] = uVar2;
  _memset(extraout_ECX + 0x79c,0,0x10);
  _memset(extraout_ECX + 0x7a5,0,0x18);
  _memset(extraout_ECX + 0x799,0,0xc);
  _memset(extraout_ECX + 0x7ab,0,0x20);
  _memset(extraout_ECX + 0x7b3,0,8);
  extraout_ECX[0x8fc] = 0xffffffff;
  extraout_ECX[0x936] = 0;
  extraout_ECX[0x937] = 0;
  uVar2 = (*DAT_0097b704)();
  extraout_ECX[0x90c] = uVar2;
  extraout_ECX[0x90b] = uVar2;
  uVar2 = FUN_007d1e08();
  extraout_ECX[0x910] = uVar2;
  uVar2 = FUN_007d1e08();
  extraout_ECX[0x918] = uVar2;
  uVar2 = FUN_007d1e08();
  extraout_ECX[0x919] = uVar2;
  uVar2 = FUN_007d1e08();
  extraout_ECX[0x90d] = uVar2;
  uVar2 = FUN_007d1e08();
  extraout_ECX[0x90e] = uVar2;
  uVar2 = FUN_007d1e08();
  extraout_ECX[0x90f] = uVar2;
  uVar2 = FUN_004b8d93();
  extraout_ECX[0x909] = uVar2;
  extraout_ECX[0x91c] = 0;
  *(undefined4 *)extraout_ECX[0x931] = 1;
  *(undefined4 *)(extraout_ECX[0x931] + 4) = 0;
  *(undefined4 *)(extraout_ECX[0x931] + 8) = 0;
  *(undefined4 *)(extraout_ECX[0x931] + 0xc) = 2;
  *(undefined4 *)(extraout_ECX[0x931] + 0x10) = 3;
  *(undefined4 *)(extraout_ECX[0x931] + 0x14) = 0;
  *(undefined4 *)(extraout_ECX[0x931] + 0x18) = 3;
  *(undefined4 *)(extraout_ECX[0x931] + 0x1c) = 0;
  extraout_ECX[0x932] = extraout_ECX[0x930];
  FUN_007b45f1(extraout_ECX + 0x931);
  *(undefined4 *)(unaff_EBP + 8) = 0x80000000;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x3ee1b0;
  FUN_004b8f75(unaff_EBP + -0x14,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x80000000;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x4df8f1;
  FUN_004b8f75(unaff_EBP + -0x14,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x80000000;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x4dd5cb;
  FUN_004b8f75(unaff_EBP + -0x14,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x80000000;
  *(code **)(unaff_EBP + -0x14) = ptr_004f5c6a;
  FUN_004b8f75(unaff_EBP + -0x14,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x80000000;
  *(undefined **)(unaff_EBP + -0x14) = &DAT_004e23e9;
  FUN_004b8f75(unaff_EBP + -0x14,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x80000000;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x4dd5cb;
  FUN_004b8f75(unaff_EBP + -0x14,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x80000000;
  *(code **)(unaff_EBP + -0x14) = ptr_004e23ec;
  FUN_004b8f75(unaff_EBP + -0x14,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x80000000;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x4e23ef;
  FUN_004b8f75(unaff_EBP + -0x14,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x80000000;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x4e23ed;
  FUN_004b8f75(unaff_EBP + -0x14,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x80000000;
  *(code **)(unaff_EBP + -0x14) = ptr_004dfcda;
  FUN_004b8f75(unaff_EBP + -0x14,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x80000000;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x4f5c6e;
  FUN_004b8f75(unaff_EBP + -0x14,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x80000000;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x4f837c;
  FUN_004b8f75(unaff_EBP + -0x14,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0x80000000;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x4f837d;
  FUN_004b8f75(unaff_EBP + -0x14,unaff_EBP + 8);
  FUN_007b3f86();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


