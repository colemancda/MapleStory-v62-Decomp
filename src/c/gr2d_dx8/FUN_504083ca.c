/* FUN_504083ca - 0x504083ca in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl FUN_504083ca(char *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  div_t dVar4;
  
  iVar1 = FUN_504082e0(param_3);
  while (param_5 < iVar1 + 1 + param_4) {
    param_2 = param_2 / 10;
    param_4 = param_4 + -1;
    param_3 = param_3 + 1;
    iVar1 = FUN_504082e0(param_3);
  }
  pcVar2 = param_1 + param_4;
  pcVar3 = pcVar2;
  while (param_1 < pcVar3) {
    dVar4 = div(param_2,10);
    param_2 = dVar4.quot;
    pcVar3 = pcVar3 + -1;
    *pcVar3 = (char)dVar4.rem + '0';
  }
  *pcVar2 = 'E';
  pcVar2 = pcVar2 + 1;
  pcVar3 = pcVar2 + iVar1;
  while (pcVar2 < pcVar3) {
    dVar4 = div(param_3,10);
    param_3 = dVar4.quot;
    pcVar3 = pcVar3 + -1;
    *pcVar3 = (char)dVar4.rem + '0';
  }
  pcVar2[iVar1] = '\0';
  return;
}


