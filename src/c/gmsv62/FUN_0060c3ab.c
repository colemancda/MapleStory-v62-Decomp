/* FUN_0060c3ab - 0x0060c3ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0060c3ab(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_005c0182();
  extraout_ECX[0x5e] = 0;
  extraout_ECX[0x5f] = 0;
  extraout_ECX[0x61] = 0;
  extraout_ECX[0x62] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[99] = 0;
  extraout_ECX[100] = 0;
  extraout_ECX[0x66] = 0;
  extraout_ECX[0x67] = 0;
  extraout_ECX[0x68] = 0;
  extraout_ECX[0x6a] = 0xffffffff;
  extraout_ECX[0x70] = 0;
  extraout_ECX[0x72] = 0;
  extraout_ECX[0x74] = 0;
  extraout_ECX[0x76] = 0;
  extraout_ECX[0x78] = 0;
  extraout_ECX[0x7a] = 0;
  extraout_ECX[0x7c] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0087b2f0(extraout_ECX + 0x7d,8,3,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x84] = 0;
  extraout_ECX[0x86] = 0;
  extraout_ECX[0x88] = 0;
  extraout_ECX[0x8a] = 0;
  extraout_ECX[0x8c] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0074b9b2();
  extraout_ECX[0x1c7] = 0;
  extraout_ECX[0x1c8] = 0;
  extraout_ECX[0x1c9] = 0;
  extraout_ECX[0x1ca] = 0;
  extraout_ECX[0x1cb] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  *extraout_ECX = &PTR_FUN_008ecf70;
  extraout_ECX[1] = &PTR_LAB_008ecf24;
  extraout_ECX[2] = &PTR_FUN_008ecf20;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x60c);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00402676();
  FUN_00611799(0x18,unaff_EBP + -0xd);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


