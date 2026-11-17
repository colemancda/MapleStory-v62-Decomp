/* ptr_00485c29 - 0x00485c29 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00485c29(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0x201) {
    iVar1 = (*DAT_0097b57c)(&DAT_00964bc0,param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = (*DAT_0097b57c)(&DAT_00964bd0,param_3,param_4);
      if (iVar1 == 0) {
        iVar1 = (*DAT_0097b57c)(&DAT_00964be0,param_3,param_4);
        if (iVar1 == 0) goto LAB_00485c93;
      }
    }
    iVar1 = FUN_0045dc32();
    FUN_0045dc39(iVar1 == 0);
  }
  else {
LAB_00485c93:
    FUN_00486745();
  }
  return;
}


