/* FUN_0062d54c - 0x0062d54c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0062d54c(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(short *)(unaff_EBP + 8) != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar1 = FUN_0062f6cd(unaff_EBP + 8,unaff_EBP + -0x14);
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar1 = *(int *)(unaff_EBP + -0x10);
    }
    else {
      iVar1 = *(int *)(unaff_EBP + -0x10);
      if ((*(char **)(iVar1 + 0x78) != (char *)0x0) && (**(char **)(iVar1 + 0x78) != '\0')) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (iVar1 != 0) {
          FUN_0062f18d(0);
        }
        uVar2 = 1;
        goto LAB_0062d5bb;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    if (iVar1 != 0) {
      FUN_0062f18d(0);
    }
  }
  uVar2 = 0;
LAB_0062d5bb:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


