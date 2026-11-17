/* ptr_006708ce - 0x006708ce in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006708ce(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = (undefined4 *)(extraout_ECX + 0x10);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  FUN_00402aba();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0067064a(*(undefined4 *)(unaff_EBP + 8));
  FUN_0045d247(*(undefined2 *)(extraout_ECX + 0x24));
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)(extraout_ECX + 0x14);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


