/* FUN_0086dc90 - 0x0086dc90 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0086dc90(int param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  
  while( true ) {
    while( true ) {
      DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x14),0xde3);
      if (DVar1 == 0) break;
      iVar2 = FUN_0086efb0();
      if (iVar2 == 0) {
        FUN_0086e010(param_1 + 0x1468,0x62d,10);
      }
      else {
        iVar2 = FUN_0086f1e0();
        if (iVar2 == 0) {
          FUN_00874040(0x8b1,0x630,0xc);
        }
        else {
          iVar2 = FUN_0086dfc0();
          if ((iVar2 != 0) || (*(char *)(param_1 + 0x21) != '\0')) {
            if (DAT_0097fc64 != 0) {
              uVar3 = FUN_0086dfc0(*(undefined1 *)(param_1 + 0x21));
              uVar3 = FUN_00875080(&DAT_0096e2a0,uVar3);
              FUN_0086cff0(DAT_0097fc64 + 0x24,uVar3);
            }
            FUN_0086e010(param_1 + 0x1468,500,0);
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x20) == '\0') break;
    FUN_0086e010(param_1 + 0x1468,0x62d,0);
  }
  return 0;
}


