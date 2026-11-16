/* PcInitModule - 0x50c104ca in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 PcInitModule(void)

{
  int iVar1;
  char *pcVar2;
  short *psVar3;
  char local_10c [260];
  int *local_8;
  
                    /* 0x104ca  5  PcInitModule */
  FUN_50c026fc();
  FUN_50c026fc();
  if (DAT_50c1ca84 != 0) {
    _DAT_50c1cad0 = _DAT_50c1cad0 + -1;
    if (_DAT_50c1cad0 == 0) {
      DAT_50c1cacc = 0;
    }
    _DAT_50c1cab0 = _DAT_50c1cab0 + -1;
    if (_DAT_50c1cab0 == 0) {
      DAT_50c1caac = 0;
    }
    return 1;
  }
  iVar1 = (*DAT_50c20f1c)(DAT_50c1ca24,local_10c,0x104);
  if (iVar1 == 0) {
    _DAT_50c1cad0 = _DAT_50c1cad0 + -1;
    if (_DAT_50c1cad0 == 0) {
      DAT_50c1cacc = 0;
    }
    _DAT_50c1cab0 = _DAT_50c1cab0 + -1;
    if (_DAT_50c1cab0 == 0) {
      DAT_50c1caac = 0;
    }
    return 0x800401f9;
  }
  pcVar2 = local_10c + iVar1 + -1;
  if (local_10c < pcVar2) {
    do {
      if ((*pcVar2 == '\\') || (*pcVar2 == '/')) break;
      pcVar2 = pcVar2 + -1;
    } while (local_10c < pcVar2);
    if (local_10c < pcVar2) {
      pcVar2[1] = '\0';
      FUN_50c02963();
      FUN_50c04bec((int *)&local_8);
      FUN_50c02a72(&DAT_50c1ca80);
      DAT_50c1ca80 = local_8;
      if ((local_8 == (int *)0x0) || (FUN_50c02a85(local_8), DAT_50c1ca80 == (int *)0x0)) {
        psVar3 = (short *)0x0;
      }
      else {
        psVar3 = (short *)*DAT_50c1ca80;
      }
      FUN_50c0f770(psVar3);
    }
  }
  _DAT_50c1cad0 = _DAT_50c1cad0 + -1;
  DAT_50c1ca84 = 1;
  if (_DAT_50c1cad0 == 0) {
    DAT_50c1cacc = 0;
  }
  _DAT_50c1cab0 = _DAT_50c1cab0 + -1;
  if (_DAT_50c1cab0 == 0) {
    DAT_50c1caac = 0;
  }
  FUN_50c026fc();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)&DAT_50c1ca90,(IBinding *)0x0);
  _DAT_50c1ca8c = _DAT_50c1ca8c + -1;
  if (_DAT_50c1ca8c == 0) {
    DAT_50c1ca88 = 0;
  }
  return 0;
}


