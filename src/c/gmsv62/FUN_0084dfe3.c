/* FUN_0084dfe3 - 0x0084dfe3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084dfe3(void)

{
  char cVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  FUN_00879bb8();
  iStack_10 = 0x84dffa;
  cVar1 = FUN_0042452b();
  if (cVar1 == '7') {
    *(undefined1 **)(unaff_EBP + 8) = auStack_20;
    uVar2 = 0xf3e;
  }
  else {
    if (cVar1 != '8') {
      iStack_10 = unaff_EBP + 8;
      uStack_14 = 0x84e011;
      FUN_0045cdbc();
      iStack_10 = 0;
      uStack_14 = 1;
      uStack_18 = 0;
      uStack_1c = 0;
      *(undefined1 **)(unaff_EBP + -0x10) = auStack_20;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00450368(unaff_EBP + 8);
      FUN_007db3ad();
      *(undefined4 *)(extraout_ECX + 0x208c) = 0;
      iStack_10 = 0x84e03d;
      uVar2 = FUN_007d1e08();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(extraout_ECX + 0x2090) = uVar2;
      iStack_10 = 0x84e04f;
      FUN_00414ebb();
      goto LAB_0084e09b;
    }
    *(undefined1 **)(unaff_EBP + 8) = auStack_20;
    uVar2 = 0xe58;
  }
  iStack_10 = 0;
  uStack_14 = 1;
  uStack_18 = 0;
  uStack_1c = 0;
  FUN_00679d22(auStack_20,uVar2);
  FUN_007db3ad();
  *(undefined4 *)(extraout_ECX + 0x208c) = 0;
  iStack_10 = 0x84e095;
  uVar2 = FUN_007d1e08();
  *(undefined4 *)(extraout_ECX + 0x2090) = uVar2;
LAB_0084e09b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


