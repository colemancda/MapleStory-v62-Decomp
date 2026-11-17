/* ptr_007895c6 - 0x007895c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007895c6(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar2;
  int unaff_EDI;
  
  do {
    iVar1 = FUN_00773393(in_EAX + -0x40,in_EAX);
    if (iVar1 != 0) {
      unaff_ESI = unaff_ESI + 1;
      *(int *)(unaff_EBP + 0x14) = unaff_ESI;
    }
    do {
      iVar2 = (unaff_ESI + unaff_EDI) * 0x40;
      iVar1 = FUN_00773393(unaff_EBP + -0x4c,*unaff_EBX + -0x40 + iVar2);
      if (iVar1 == 0) {
LAB_00789617:
        FUN_00772d62(unaff_EBP + -0x4c);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00770582();
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      FUN_00772d62(iVar2 + -0x40 + *unaff_EBX);
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x14);
      if (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0x14)) goto LAB_00789617;
      unaff_ESI = *(int *)(unaff_EBP + 0xc) * 2;
      *(int *)(unaff_EBP + 0x14) = unaff_ESI;
    } while (*(int *)(unaff_EBP + 0x10) <= unaff_ESI);
    in_EAX = (unaff_ESI + unaff_EDI) * 0x40 + *unaff_EBX;
  } while( true );
}


