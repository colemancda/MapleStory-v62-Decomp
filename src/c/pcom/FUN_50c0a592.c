/* FUN_50c0a592 - 0x50c0a592 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 FUN_50c0a592(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_50c10270();
  Ordinal_8(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_50c08394((ushort *)(unaff_EBP + -0x1c),(ushort *)(unaff_EBP + 0xc),0,0x13);
  if (iVar1 < 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_50c08269((short *)(unaff_EBP + -0x1c));
    if (iVar1 < 0) {
      FUN_50c101c4(iVar1);
    }
    uVar2 = 0x80070057;
  }
  else {
    uVar2 = (**(code **)(*(int *)(*(int *)(unaff_EBP + 8) + -4) + 0x18))
                      (*(int *)(unaff_EBP + 8) + -4,*(undefined4 *)(unaff_EBP + 0x14),
                       *(undefined4 *)(unaff_EBP + 0x1c),*(undefined4 *)(unaff_EBP + 0x20),
                       *(undefined4 *)(unaff_EBP + 0x24),*(undefined4 *)(unaff_EBP + 0x28));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_50c08269((short *)(unaff_EBP + -0x1c));
    if (iVar1 < 0) {
      FUN_50c101c4(iVar1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


