/* FUN_00607ce2 - 0x00607ce2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00607ce2(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  pcStack_18 = (code *)0x607cfb;
  FUN_004bc8b4();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x23] = 0;
  pcStack_18 = thunk_FUN_00450463;
  pcStack_1c = ptr_0045e147;
  uStack_20 = 2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0x24,8);
  pcStack_18 = thunk_FUN_00450463;
  pcStack_1c = ptr_0045e147;
  uStack_20 = 4;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087b2f0(extraout_ECX + 0x28,8);
  pcStack_18 = thunk_FUN_00450463;
  pcStack_1c = ptr_0045e147;
  uStack_20 = 4;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 0x30,8);
  extraout_ECX[0x39] = 0;
  extraout_ECX[0x3b] = 0;
  extraout_ECX[0x3d] = 0;
  extraout_ECX[0x3e] = 0;
  extraout_ECX[0x42] = 0;
  extraout_ECX[0x43] = 0;
  extraout_ECX[0x44] = 0;
  pcStack_18 = (code *)0x0;
  pcStack_1c = (code *)0x0;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_20;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *extraout_ECX = &PTR_LAB_008eceb8;
  extraout_ECX[1] = &PTR_FUN_008ece6c;
  extraout_ECX[2] = &PTR_FUN_008ece68;
  FUN_004033a1(u_UI_UIWindow_img_Delivery_backgrn_00968004);
  FUN_008163ca();
  iVar1 = *(int *)(unaff_EBP + 8);
  extraout_ECX[0x1e] = iVar1;
  if (iVar1 == 1) {
    extraout_ECX[0x21] = 2;
  }
  pcStack_18 = (code *)0x1;
  pcStack_1c = (code *)0x0;
  uStack_20 = 1;
  FUN_0081420c(0xff,0x19,0x122,0x21d,10);
  pcStack_18 = (code *)0x607df5;
  FUN_006090f8();
  pcStack_18 = (code *)0x0;
  pcStack_1c = (code *)0x607dfd;
  FUN_008161f1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


