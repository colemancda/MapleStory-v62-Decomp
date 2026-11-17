/* FUN_004da81e - 0x004da81e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004da81e(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  if ((iVar1 == 2) && (*(int *)(extraout_ECX + 0x184) == 0)) {
    iVar1 = 8;
  }
  if (*(int *)(extraout_ECX + 0xc0) == 0) {
    if (iVar1 == 2) {
      iStack_1c = 0x4da85c;
      FUN_004db8be();
      goto LAB_004da8e4;
    }
    if (iVar1 == 8) {
      if (*(int *)(extraout_ECX + 0x184) != 0) {
        iStack_1c = 0;
        uStack_20 = 0;
        uStack_24 = 0;
        uStack_28 = 0;
        *(undefined1 **)(unaff_EBP + 8) = auStack_2c;
        FUN_00679d22(auStack_2c,0xd44);
        iVar1 = FUN_007db791();
        if (iVar1 != 6) goto LAB_004da8e4;
      }
      if ((*(int *)(extraout_ECX + 0x188) != 0) || (*(int *)(extraout_ECX + 0x738) != 0)) {
        iStack_1c = 0;
        uStack_20 = 0;
        uStack_24 = 0x6f;
        uStack_28 = 0x4da8b1;
        FUN_0060142b();
        iStack_1c = 0x27;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uStack_20 = 0x4da8be;
        FUN_00457cda();
        iStack_1c = unaff_EBP + -0x1c;
        uStack_20 = 0x4da8cd;
        FUN_004751b2();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_1c = 0x4da8d9;
        FUN_0045ebca();
        goto LAB_004da8e4;
      }
    }
  }
  iStack_1c = 2;
  uStack_20 = 0x4da8e4;
  FUN_0060da48();
LAB_004da8e4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


