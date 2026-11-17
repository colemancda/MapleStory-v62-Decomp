/* ptr_004264e8 - 0x004264e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004264e8(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_EAX;
  uint uVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  do {
    uVar3 = FUN_0087a024(in_EAX,5);
    iVar2 = *(int *)(unaff_ESI + 4);
    piVar1 = (int *)(unaff_EBX + (uVar3 % *(uint *)(unaff_EBP + 8)) * 4);
    *(int *)(unaff_ESI + 4) = *piVar1;
    *piVar1 = unaff_ESI;
    unaff_ESI = iVar2;
    while (unaff_ESI == 0) {
      if (*(int **)(unaff_EBP + -4) <= unaff_EDI) {
        FUN_00402b41(*(undefined4 *)(unaff_EBP + -8));
        return;
      }
      unaff_ESI = *unaff_EDI;
      unaff_EDI = unaff_EDI + 1;
    }
    in_EAX = *(undefined4 *)(unaff_ESI + 8);
  } while( true );
}


