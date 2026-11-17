/* ptr_00498cc8 - 0x00498cc8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00498cc8(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(byte *)(unaff_EBP + 0xf) & 0x80) == 0) {
    if (*(int *)(unaff_EBP + 8) == 0x20) {
      if (*(int *)(extraout_ECX + 0x54) == 0) {
        *(undefined4 *)(extraout_ECX + 0x50) = 0;
        *(undefined4 *)(extraout_ECX + 0x54) = 1;
        FUN_00498f74(1);
      }
      goto LAB_00498d66;
    }
  }
  else if (*(int *)(unaff_EBP + 8) == 0x20) {
    if (*(int *)(extraout_ECX + 0x54) != 0) {
      *(undefined4 *)(extraout_ECX + 0x50) = 0;
      *(undefined4 *)(extraout_ECX + 0x54) = 0;
      puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x5a7);
      uVar1 = *puVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_007d3cdd(uVar1);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      FUN_00498f74(0);
      (**(code **)(**(int **)(extraout_ECX + 0x20) + 0x1c))
                (*(undefined4 *)(extraout_ECX + 0x10),100,0);
    }
    goto LAB_00498d66;
  }
  (*(code *)**(undefined4 **)(*(int *)(extraout_ECX + 0x20) + 4))
            (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
LAB_00498d66:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


