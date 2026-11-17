/* FUN_0044e7ec - 0x0044e7ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0044e7ec(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  code *pcStack_14;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  pcStack_14 = (code *)0x44e804;
  FUN_008140e5();
  DAT_0097846c = -(uint)(extraout_ECX + 0x19 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1a] = 0xffffffff;
  extraout_ECX[0x1c] = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0x19] = 0;
  extraout_ECX[0x1b] = 0;
  pcStack_14 = (code *)0x44e836;
  FUN_0074b9b2();
  pcStack_14 = (code *)&LAB_004503da;
  puStack_18 = &LAB_004503d4;
  uStack_1c = 2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0x157,4);
  extraout_ECX[0x159] = 0;
  extraout_ECX[0x15a] = 0;
  pcStack_14 = FUN_004115cc;
  puStack_18 = &LAB_00450362;
  uStack_1c = 2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087b2f0(extraout_ECX + 0x15b,4);
  extraout_ECX[0x15e] = 0;
  extraout_ECX[0x160] = 0;
  extraout_ECX[0x162] = 0;
  pcStack_14 = (code *)0x0;
  puStack_18 = (undefined1 *)0x0;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_1c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *extraout_ECX = &PTR_FUN_008e8e00;
  extraout_ECX[1] = &PTR_LAB_008e8db4;
  extraout_ECX[2] = &PTR_FUN_008e8db0;
  FUN_004033a1(u_UI_UIWindow_img_Book_backgrnd_00964244);
  FUN_008163ca();
  pcStack_14 = (code *)0x1;
  puStack_18 = (undefined1 *)0x0;
  uStack_1c = 1;
  FUN_0081420c(0xbe,0x94,0x1de,0x161,10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


