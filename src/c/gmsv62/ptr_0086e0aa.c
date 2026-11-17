/* ptr_0086e0aa - 0x0086e0aa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0086e0aa(void)

{
  undefined4 uVar1;
  int iVar2;
  uint unaff_EDI;
  
  if ((uint)(DAT_0096d720 * 800) <= unaff_EDI) {
    FUN_0086ea60();
    FUN_0086eb40();
    if (DAT_0097fc64 != 0) {
      uVar1 = FUN_00875080(&DAT_0096e3a8);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar1);
    }
    iVar2 = FUN_0086698a(0x3e9,unaff_EDI);
    if (iVar2 == 0) {
      if (DAT_0097fc64 != 0) {
        uVar1 = FUN_00875080(&DAT_0096e338,0x3e9);
        FUN_0086cff0(DAT_0097fc64 + 0x24,uVar1);
      }
      *(undefined1 *)(DAT_0097fc64 + 0x23) = 1;
      return 0;
    }
  }
  return 1;
}


