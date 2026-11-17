/* FUN_00614dc1 - 0x00614dc1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00614dc1(void)

{
  char cVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_3c;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  iStack_18 = unaff_EBP + -0x10;
  uStack_1c = 0x614dde;
  iStack_18 = FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_1c = 0x614df1;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_18 = 0x614dfd;
  FUN_00414ebb();
  iStack_18 = 0x614e05;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    uStack_30 = 0;
  }
  else {
    uStack_30 = *(undefined4 *)(*(int *)(extraout_ECX + 0x78) + 0x10);
  }
  iStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_34 = 0x3eb;
  iStack_3c = extraout_ECX + 0x80;
  *(undefined1 **)(unaff_EBP + 8) = auStack_38;
  FUN_00433bdf();
  *(int **)(unaff_EBP + -0x14) = &iStack_3c;
  FUN_0041160e(extraout_ECX + 0x114);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = FUN_00449713();
  FUN_00560272(uVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


