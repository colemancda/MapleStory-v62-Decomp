/* FUN_0085c794 - 0x0085c794 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0085c794(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_14;
  
  FUN_00879bb8();
  local_14 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045ed72(0);
  FUN_0045ee27();
  if (((*(char **)(unaff_EBP + 8) != (char *)0x0) && (**(char **)(unaff_EBP + 8) != '\0')) &&
     (*(int *)(unaff_EBP + 0xc) != 0)) {
    *(undefined4 **)(unaff_EBP + -0x10) = &local_14;
    local_14 = 0;
    FUN_00414f8b(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0085cdcf();
    iVar1 = FUN_0085cccb();
    if (-1 < iVar1) {
      puVar3 = (undefined4 *)(iVar1 * 0x16 + **(int **)(extraout_ECX + 0x2c74));
      puVar4 = *(undefined4 **)(unaff_EBP + 0xc);
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_14 = 0x85c817;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


