/* FUN_0047c13d - 0x0047c13d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047c13d(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x993);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar2 = FUN_0047c824(2,uVar2,0,0x80000000,0x7fffffff);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  FUN_00414ebb();
  if (-1 < *(int *)(unaff_EBP + -0x1c)) {
    FUN_00445a30();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (0 < *(int *)(unaff_EBP + -0x1c)) {
      do {
        puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0x992);
        uVar2 = *puVar1;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00434e21(unaff_EBP + -0x18,uVar2,*(undefined4 *)(unaff_EBP + -0x14));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        uVar2 = FUN_0047c824(2,*(undefined4 *)(unaff_EBP + -0x18),0,0x80000000,0x7fffffff);
        *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
        puVar1 = (undefined4 *)FUN_0045f1e3(0xffffffff);
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
        *puVar1 = *(undefined4 *)(unaff_EBP + -0x24);
      } while (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x1c));
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


