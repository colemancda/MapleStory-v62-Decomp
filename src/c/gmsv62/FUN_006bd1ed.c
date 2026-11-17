/* FUN_006bd1ed - 0x006bd1ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bd1ed(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  FUN_00879bb8();
  iStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_30;
  FUN_00679d22(auStack_30,0xe41);
  iVar1 = FUN_007db791();
  if (iVar1 == 6) {
    iStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0x86;
    uStack_2c = 0x6bd236;
    FUN_0060142b();
    iStack_20 = 5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_24 = 0x6bd243;
    FUN_00457cda();
    iStack_20 = *(undefined4 *)(*(int *)(extraout_ECX + 0x584) + 0xc);
    uStack_24 = 0x6bd25a;
    FUN_00457d37();
    iStack_20 = *(undefined4 *)
                 (*(int *)(*(int *)(*(int *)(extraout_ECX + 0x584) + 0x28) + 4 +
                          (*(int *)(*(int *)(extraout_ECX + 0x630) + 0x38) + *(int *)(unaff_EBP + 8)
                          ) * 8) + 0xc);
    uStack_24 = 0x6bd27c;
    FUN_00457d37();
    iStack_20 = unaff_EBP + -0x20;
    uStack_24 = 0x6bd28b;
    FUN_004751b2();
    iStack_20 = 0x6bd292;
    FUN_006bd2ae();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_20 = 0x6bd29e;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


