# RFIC Transceiver Lab Testing

Lab characterization and validation of an RFIC transceiver.

## Folder layout

| Folder     | Contents                                                        |
|------------|-----------------------------------------------------------------|
| `docs/`    | Test plans, setup diagrams, datasheets, equipment notes         |
| `scripts/` | Instrument control and automation scripts, data processing      |
| `data/`    | Raw measurement data captured from the bench                    |
| `results/` | Processed results, plots, and test reports                      |

## Planned measurements

### Transmitter (TX)
- Output power and power control range
- Output P1dB / saturated power
- EVM (error vector magnitude)
- ACLR / spectral emission mask
- Harmonics and spurious emissions
- LO leakage and image (sideband) suppression

### Receiver (RX)
- Gain and gain control range
- Noise figure
- Sensitivity
- Input P1dB and IIP3
- Blocking / selectivity
- Image rejection

### Synthesizer / LO
- Phase noise
- Lock time
- Spurs
