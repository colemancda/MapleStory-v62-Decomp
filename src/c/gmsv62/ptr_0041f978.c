/* ptr_0041f978 - 0x0041f978 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0041f978(void)

{
  int in_EAX;
  int iVar1;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  *(int *)(unaff_EBP + 0xc) = DAT_00973ccc + in_EAX * 2;
  (*DAT_0097b53c)(*(undefined4 *)(DAT_00973cd8 + 4),unaff_EBP + -0x14);
  (*DAT_0097b544)(8);
  (*DAT_0097b544)(4);
  iVar1 = (*DAT_0097b538)(0x80,s_AdSpace_00963e26 + 2);
  *(int *)(unaff_EDI + 0x10) = iVar1;
  if (iVar1 != unaff_ESI) {
    *(undefined4 *)(unaff_EDI + 0x14) = *(undefined4 *)(unaff_EBP + -4);
    *(undefined4 *)(unaff_EDI + 0x18) = *(undefined4 *)(unaff_EBP + 0xc);
    (*DAT_0097b534)(iVar1,5);
    (*DAT_0097b530)(*(undefined4 *)(unaff_EDI + 0x10));
    while( true ) {
      iVar1 = (*DAT_0097b52c)(unaff_EBP + -0x30);
      if (iVar1 == 0) break;
      (*DAT_0097b528)(unaff_EBP + -0x30);
      (*DAT_0097b524)(unaff_EBP + -0x30);
    }
    (*DAT_0097b654)();
  }
  return 0;
}


