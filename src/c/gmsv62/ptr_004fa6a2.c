/* ptr_004fa6a2 - 0x004fa6a2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004fa6a2(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_EAX;
  uint unaff_EBX;
  uint uVar4;
  int unaff_EBP;
  
  do {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_005a8209(in_EAX);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    FUN_004faf09();
    uVar4 = unaff_EBX;
    do {
      if (uVar4 == 0) {
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      *(uint *)(unaff_EBP + -0x18) = uVar4;
      iVar2 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
      unaff_EBX = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      piVar1 = (int *)(uVar4 + 8);
      uVar4 = unaff_EBX;
    } while (*piVar1 != *(int *)(unaff_EBP + -0x10) && -1 < *piVar1 - *(int *)(unaff_EBP + -0x10));
    puVar3 = (undefined4 *)FUN_004fae10(unaff_EBP + -0x14);
    in_EAX = *puVar3;
  } while( true );
}


