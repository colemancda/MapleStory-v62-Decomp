/* FUN_005c1269 - 0x005c1269 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c1269(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iVar2;
  
  FUN_00879bb8();
  iVar2 = 0;
  if (0 < *(int *)(extraout_ECX + 0xc4)) {
    do {
      iVar1 = FUN_005c12fa(unaff_EBP + -0x18,iVar2);
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar1 + 4);
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_00449941(0);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_005c12fa(unaff_EBP + -0x20,iVar2);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_0043fd71();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          FUN_00449941(0);
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(extraout_ECX + 0xc4));
  }
  FUN_008162ff();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


