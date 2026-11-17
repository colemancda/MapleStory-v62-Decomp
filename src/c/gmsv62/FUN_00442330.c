/* FUN_00442330 - 0x00442330 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00442330(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  
  FUN_00879bb8();
  iVar2 = 0;
  if (*(int *)(extraout_ECX + 0x4ac) == 0) {
    puVar3 = (undefined4 *)(extraout_ECX + 0x1d);
    do {
      uVar1 = FUN_004415c5(unaff_EBP + -0x14,*puVar3,iVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00445997(uVar1);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_004459d0(0);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < 0x31);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


