/* FUN_00772aba - 0x00772aba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00772aba(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x28);
  iVar1 = *(int *)(iVar2 + 0x818);
  if ((iVar1 != 0) && (iVar1 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00772cd7(*(undefined4 *)(iVar2 + 0x818),unaff_EBP + -0x4c);
    if (iVar2 != -1) {
      iVar2 = FUN_00429303();
      if (iVar2 != 0) {
        FUN_004e9ed9(unaff_EBP + -0x48);
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00770582();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


