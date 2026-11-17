/* FUN_0084a1e4 - 0x0084a1e4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0084a1e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_c;
  
  if (*(int *)(param_1 + 0x3314) == 0) {
    FUN_00424dbc();
    FUN_00424dbc(param_1 + 0x3318);
    iVar1 = FUN_00468a70();
    uVar2 = 0;
    if (iVar1 != 0) {
      FUN_0045f36d();
      for (local_c = 0;
          (*(int *)(param_1 + 0x3274) != 0 && (local_c < *(uint *)(*(int *)(param_1 + 0x3274) + -4))
          ); local_c = local_c + 1) {
        FUN_0045e10e();
      }
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0x3314) = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


