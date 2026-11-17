/* FUN_006f755d - 0x006f755d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006f755d(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcStack_20;
  
  FUN_00879bb8();
  *(code ***)(unaff_EBP + -0x10) = &pcStack_20;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_00402e8e(u_UI_UIWindow_img_PartySearch_back_0096b228);
  FUN_00789efb(0x16,3);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  DAT_0097bd7c = -(uint)(extraout_ECX != (undefined4 *)0xfffffa88) & (uint)extraout_ECX;
  extraout_ECX[0x15f] = 0;
  pcStack_20 = thunk_FUN_00450463;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0x160,8,2,ptr_0045e147);
  pcStack_20 = thunk_FUN_00450463;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087b2f0(extraout_ECX + 0x164,8,3,ptr_0045e147);
  pcStack_20 = thunk_FUN_0045e637;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 0x16a,8,0x13,&LAB_006f9e98);
  pcStack_20 = thunk_FUN_0045e5c9;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087b2f0(extraout_ECX + 400,8,2,&LAB_006f9e91);
  pcStack_20 = thunk_FUN_0045e5c9;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087b2f0(extraout_ECX + 0x194,8,3,&LAB_006f9e91);
  extraout_ECX[0x19c] = 0;
  extraout_ECX[0x19e] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *extraout_ECX = &PTR_FUN_008f0490;
  extraout_ECX[1] = &PTR_FUN_008f0444;
  extraout_ECX[2] = &PTR_FUN_008f0440;
  pcStack_20 = (code *)(extraout_ECX + 0x15c);
  FUN_0047c974(extraout_ECX[0x155],unaff_EBP + -0x1c,unaff_EBP + -0x18);
  extraout_ECX[0x19a] = extraout_ECX[0x15c];
  if (extraout_ECX[0x18] == 0) {
    pcStack_20 = (code *)0x80004003;
    FUN_00878dfb();
  }
  iVar1 = extraout_ECX[0x18];
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 == 0) {
    pcStack_20 = (code *)0x80004003;
    FUN_00878dfb();
  }
  pcStack_20 = (code *)0x1;
  uVar6 = 0;
  uVar5 = 1;
  uVar4 = 10;
  uVar2 = FUN_0040e53d(10,1,0);
  uVar3 = FUN_0040e48b(uVar2);
  FUN_0081420c(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),uVar3,uVar2,uVar4,
               uVar5,uVar6);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


